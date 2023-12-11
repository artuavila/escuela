package principal;

import java.util.InputMismatchException;
import java.util.Scanner;

public abstract class Utiles {

    public static Scanner s = new Scanner(System.in);

    public static int ingresarEntero(int min, int max) {

        int opc=0;
        boolean error = false;

        do {
            error = false;
            try {
                opc = s.nextInt();
                if((opc<min)||(opc>max)) {
                    System.out.println("Error. Debe ingresar un numero del " + min + " al " + max);
                    error = true;
                }
                s.nextLine();
            } catch (InputMismatchException e) {
                System.out.println("Error. Tipo de dato mal ingresado");
                error = true;
                s.nextLine();
            }
        }while(error);

        return opc;
    }

    public static float ingresarFloat(float min, float max) {

        float opc=0;
        boolean error = false;

        do {
            error = false;
            try {
                opc = s.nextFloat();
                if((opc<min)||(opc>max)) {
                    System.out.println("Error. Debe ingresar un numero del " + min + " al " + max);
                    error = true;
                }
                s.nextLine();
            } catch (InputMismatchException e) {
                System.out.println("Error. Tipo de dato mal ingresado");
                error = true;
                s.nextLine();
            }
        }while(error);

        return opc;
    }

    public static void esperar(int milis) {
        try {
            Thread.sleep(milis);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

}
