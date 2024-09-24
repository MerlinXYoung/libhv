#include "hlog.h"

int main(int argc, char** argv) {
    int cnt = 0;

    for (int i = 0; i < 10; ++i) {
        hlogd("[%d] Do you recv me?", ++cnt);
        hlogi("[%d] Do you recv me?", ++cnt);
        hloge("[%d] Do you recv me?", ++cnt);

        
    }
    hlog_fsync();
    return 0;
}