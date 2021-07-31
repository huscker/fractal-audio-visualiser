#ifndef IMAGE_GEN_H
#define IMAGE_GEN_H

#include "audio_handler.h"
#include <string>
#include <complex>

class ImageGen{
    private:
        int width;
        int height;
        float scale;
        float bias;
        float gain;
        float fallout;
        float bias2;
        float gain2;
        float fallout2;
        int max_iters;
        AudioHandler ah;
    public:
        ImageGen(int width,int height,int max_iters);
        void setScale(float scale);
        void setFGB(float fallout,float gain,float bias);
        void setFGB2(float fallout2,float gain2,float bias2);
        void save_frame_at(std::complex<float> c,char fname[]);
        void render_frames(std::string fname,int framerate,int startframe = 1);

};

#endif // !IMAGE_GEN_H