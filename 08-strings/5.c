/*************************************************************************************************
 * Proteção de cheques: Crie um procedimento (função sem retorno) em C chamada valorSeguro que 
 * receba uma string (que será utilizada como saída) e um valor float (que representa o valor de 
 * um cheque). Este procedimento deverá escrever na string o valor de cheque de forma segura; isto 
 * é, contendo asteriscos iniciais antes do valor do cheque.

 * Atenção: o procedimento deverá assumir que o tamanho da string é de 10 chars (contando com o 
 * terminador).
 ************************************************************************************************/

void valorSeguro(char *str, float valor) {
  char texto[20];
  texto[0] = '\0';
  char val_cheque[20]; 
  sprintf(val_cheque, "%.2f", valor);
  strcat(texto, str);
  strcat(texto, "****");  
  strcat(texto, val_cheque);  
  puts(texto);
}