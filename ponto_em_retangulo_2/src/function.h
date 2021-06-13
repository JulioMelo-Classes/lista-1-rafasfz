#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
using std::array;

#include <string>
using std::string;

/// Representa um ponto em 2D
struct Ponto {
    int x; //!< coordenada x.
    int y; //!< coordenada y.
    Ponto( int xi=0, int yi=0 ) : x{xi}, y{yi}
    {}
};

/// Tipos de localização do ponto no retângulo.
enum location_t :int { INSIDE=0, BORDER=1, OUTSIDE=2 };

location_t pt_in_rect( const Ponto&, const Ponto&, const Ponto& );
bool is_between(int n1, int n2, int n3);
bool is_between_or_equal(int n1, int n2, int n3);

#endif
