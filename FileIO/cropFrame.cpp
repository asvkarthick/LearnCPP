/* Program to crop the input frame
 * g++ cropFrame.cpp -std=c++11 -o cropFrame
 * ./cropFrame input.yuv output.yuv 352 288 176 144 88 72
 */
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

struct CropFrame
{
    unsigned char *in;
    int inw;
    int inh;
    int instride;
    unsigned char *out;
    int outw;
    int outh;
    int outstride;
    int startx;
    int starty;
};

int cropFrame(CropFrame *c)
{
    std::cout << __func__ << std::endl;

    if (c == nullptr) {
        std::cout << "Input is null" << std::endl;
        return -1;
    }
    if (c->in == nullptr || c->out == nullptr) {
        std::cout << "Image is null" << std::endl;
        return -1;
    }
    if (c->inw < c->outw || c->inh < c->outh) {
        std::cout << "input parameters less than output parameters" << std::endl;
        return -1;
    }

    unsigned char *instart = c->in + (c->starty * c->instride) + c->startx;
    unsigned char *outstart = c->out;

    for (int row = 0; row < c->outh; row++) {
        std::memcpy(outstart, instart, c->outw);
        instart += c->instride;
        outstart += c->outstride;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc < 9) {
        std::cerr << "Usage: " << argv[0] << " <input file> <output file> <input width> <input height> <output width> <output height> <startx> <starty>" << std::endl;
        return -1;
    }

    auto src_filename  = argv[1];
    auto dst_filename  = argv[2];
    auto input_width   = atoi(argv[3]);
    auto input_height  = atoi(argv[4]);
    auto output_width  = atoi(argv[5]);
    auto output_height = atoi(argv[6]);
    auto startx        = atoi(argv[7]);
    auto starty        = atoi(argv[8]);

    std::vector<unsigned char> inbuf(input_width * input_height);
    std::vector<unsigned char> outbuf(output_width * output_height);

    std::ifstream fin(src_filename, std::ios::binary);
    std::ofstream fout(dst_filename, std::ios::binary);
    if (!fin) {
        std::cerr << "Error: Opening file " << src_filename << std::endl;
        return -1;
    }

    fin.read((char*)(inbuf.data()), input_width * input_height);

    CropFrame c;
    c.in = inbuf.data();
    c.out = outbuf.data();
    c.inw = input_width;
    c.instride = input_width;
    c.inh = input_height;
    c.outw = output_width;
    c.outstride = output_width;
    c.outh = output_height;
    c.startx = startx;
    c.starty = starty;

    cropFrame(&c);

    fout.write((char*)(outbuf.data()), output_width * output_height);

    fin.close();
    fout.close();
    return 0;
}
