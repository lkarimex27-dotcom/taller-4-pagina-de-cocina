#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Encabezado HTTP obligatorio
    printf("Content-type: text/html\n\n");

    // Código HTML que verá el usuario
    printf("<!DOCTYPE html>\n");
    printf("<html lang='es'>\n");
    printf("<head>\n");
    printf("    <meta charset='UTF-8'>\n");
    printf("    <meta name='viewport' content='width=device-width, initial-scale=1.0'>\n");
    printf("    <title>Mi primera página en C</title>\n");
    printf("    <style>\n");
    printf("        body { font-family: Arial, sans-serif; background: #f5f5f5; color: #333; text-align: center; padding: 50px; }\n");
    printf("        h1 { color: #007BFF; }\n");
    printf("        p { font-size: 18px; }\n");
    printf("    </style>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("    <h1>¡Hola desde C!</h1>\n");
    printf("    <p>Esta página fue generada usando un programa en lenguaje C con CGI.</p>\n");
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
