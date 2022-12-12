
#include "lib.h"
float max_array(float a[], float dim){
    float max =a[0];
    for(int i=1; i<dim;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
