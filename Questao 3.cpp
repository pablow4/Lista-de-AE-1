#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, area, consumo, qtd_latas;
    
    
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);
    
    
    area = largura * altura;
    
    
    consumo = area * 0.3; 
    
    qtd_latas = ceil(consumo / 2.0); 
    
    
    printf("Serão necessárias %.0f latas de tinta para pintar a parede.\n", qtd_latas);
    
    return 0;
}
