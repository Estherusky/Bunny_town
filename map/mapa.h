// Mapa.h 
// Generado por MapCnv de la churrera
// Copyleft 2010 The Mojon Twins
 
unsigned char mapa [] = {
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 184, 187, 187, 187, 184, 187, 187, 187, 187, 185, 153, 153, 153, 153, 153, 153, 153, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 165, 170, 170, 90, 33, 17, 17, 17, 17, 17, 17, 19, 51, 51, 51, 51, 51, 51, 51, 
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 184, 187, 187, 187, 187, 187, 185, 153, 153, 153, 153, 153, 153, 153, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 176, 174, 177, 71, 119, 119, 119, 116, 17, 17, 19, 221, 221, 221, 221, 51, 51, 51, 
    187, 187, 187, 187, 187, 139, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 139, 187, 187, 187, 187, 187, 185, 153, 153, 153, 153, 153, 153, 153, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 90, 170, 170, 90, 170, 170, 34, 34, 34, 34, 34, 34, 33, 19, 51, 51, 51, 51, 51, 51, 51, 
    187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 185, 153, 153, 153, 153, 153, 153, 153, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 323, 314, 170, 170, 170, 170, 170, 179, 307, 170, 170, 170, 175, 17, 17, 17, 17, 17, 17, 17, 67, 51, 51, 51, 51, 51, 51, 51
};
 
#define MAX_CERROJOS 1
 
typedef struct {
    unsigned char np, x, y, st;
} CERROJOS;
 
CERROJOS cerrojos [MAX_CERROJOS] = {
    {3, 14, 7, 0}
};
 