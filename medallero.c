//Medallero olimpico
#include <stdio.h>

int main(void)
{
    
    int mOroEC, mPlataEC, mBronceEC;    //Cantidad de medallas de Ecuador
    int mOroPE, mPlataPE, mBroncePE;    //Cantidad de medallas de Peru
    
    printf("*PARTICIPA ECUADOR Y PERU*\n");
    printf("*Programa para saber que pais gano en base a sus medallas*\n");
    
    //Pedimos la cantidad de medallas de Oro, plata y bronce
    printf("Digite la cantidad de medallas de oro de Ecuador: ");
    scanf("%d",&mOroEC);
    printf("Digite la cantidad de medallas de plata de Ecuador: ");
    scanf("%d",&mPlataEC);
    printf("Digite la cantidad de medallas de bronce de Ecuador: ");
    scanf("%d",&mBronceEC);
    
    printf("Digite la cantidad de medallas de oro de Peru: ");
    scanf("%d",&mOroPE);
    printf("Digite la cantidad de medallas de plata de Peru: ");
    scanf("%d",&mPlataPE);
    printf("Digite la cantidad de medallas de bronce de Peru: ");
    scanf("%d",&mBroncePE);
    
    
    
    if( mOroPE > mOroEC){       //Comparamos medallas de oro
        
        printf("El ganador es Peru con %d medallas de oro", mOroPE);   
        
    }
    else if( mOroPE < mOroEC){       //Comparamos medallas de oro
        
        printf("El ganador es Ecuador con %d medallas de oro", mOroEC);
        
    }
    
    else{   //Como tienen la misma cantidad comparamos medallas de plata
            
            if ( mPlataPE > mPlataEC){       //Comparamos medallas de plata
                
                printf("El ganador es Peru con %d medallas de oro y %d de plata", mOroPE, mPlataPE);
                
            }
            else if( mPlataPE < mPlataEC){  //Comparamos medallas de plata
                
                printf("El ganador es Ecuador con %d medallas de oro y %d de plata", mOroEC, mPlataEC);
                
            }
            else{       //Por ultimo, como tienen la misma cantidad comparamos medallas de bronce
                
                if ( mBroncePE > mBronceEC){    //Comparamos medallas de bronce
                    
                    printf("El ganador es Peru con %d medallas de oro, %d de plata y %d de bronce", mOroPE, mPlataPE, mBroncePE);
                    
                    
                }
                else if ( mBroncePE < mBronceEC){   //Comparamos medallas de bronce
                    
                    printf("El ganador es Ecuador con %d medallas de oro, %d de plata y %d de bronce", mOroEC, mPlataEC, mBronceEC);
                    
                    
                }
                else{       //Como no dio un resultado a favor de algun pais entonces empataron
                    
                    printf("Ecuador y Peru empataron con la misma cantidad de medallas de oro, plata y bronce");
                    
                    
                }
            }
    }
    
    return 0;
    
}