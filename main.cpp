#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cont = 0, valor = 0;
    string codigo;
    while (cont < 3){
        getline (cin, codigo);
        if (codigo[0] == '-' && codigo[1] == '-' && codigo[2] == '*'){
            valor++;
        }else{
            if (codigo[0] == '-' && codigo[1] == '*' && codigo[2] == '-'){
                valor = valor + 2;
            }else{
                if(codigo[0] == '-' && codigo[1] == '*' && codigo[2] == '*'){
                    valor = valor + 3;
                }else{
                    if(codigo[0] == '*' && codigo[1] == '-' && codigo[2] == '-'){
                        valor = valor + 4;
                    }else{
                        if (codigo[0] == '*' && codigo[1] == '-' && codigo[2] == '*'){
                            valor = valor + 5;
                        }else{
                            if (codigo[0] == '*' && codigo[1] == '*' && codigo[2] == '-'){
                                valor = valor + 6;
                            }else{
                                if (codigo[0] == '*' && codigo[1] == '*' && codigo[2] == '*'){
                                    valor = valor + 7;
                                }else{
                                    if (codigo[0] == '-' && codigo[1] == '-' && codigo[2] == '-'){
                                        valor = valor + 0;
                                    }else{
                                        cout << valor <<endl;
                                        valor = 0;
                                        cont++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
