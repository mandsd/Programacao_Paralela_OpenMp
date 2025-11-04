#include <iostream>
#include <vector>
#include <cmath>
#include <omp.h>
#include <iomanip>

struct Pessoa {
    double estatura;
    double peso;
};

using namespace std;

int main() {
    double maiorEstatura = 190;
    double menorEstatura = 150;
    double amplitudeEstatura = maiorEstatura - menorEstatura;

    double maiorPeso = 120;
    double menorPeso = 30;
    double amplitudePeso = maiorPeso - menorPeso;

    // qtd população
    int N = 1000;

    int k = 1 + 3.3 * log10(N); // 

    double intervaloEstatura = amplitudeEstatura / k;
    int intervaloPeso = amplitudePeso / k;

    cout << "Intervalo Estatura: " << intervaloEstatura << "\n";

    return 0;
}

/* O código calcula o intervalo de classes para a distribuição de frequência de uma 
amostra de 1000 pessoas, considerando duas variáveis: estatura (em cm) e peso (em kg). 
Primeiro, ele define os valores máximo e mínimo de cada variável e calcula suas amplitudes 
(diferença entre o maior e o menor valor). Em seguida, aplica a fórmula de Sturges 
(`k = 1 + 3.3 * log10(N)`) para determinar o número ideal de classes na distribuição. 
Por fim, divide a amplitude pela quantidade de classes `k` para obter o intervalo de 
classe da estatura e exibe esse valor. O mesmo raciocínio é aplicado ao peso, embora o
resultado não seja impresso.
*/