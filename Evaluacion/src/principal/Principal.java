package principal;

import mascotas.Koi;
import mascotas.Mecca;
import mascotas.Nimmo;

public class Principal {
	private static Personaje personaje;

    public static void main(String[] args) {
    	crearMascota();
        boolean continuar;
        do {
            personaje.getMascota().verInformacion();
            System.out.println("---------------------------------------");
            System.out.println("Elija una opcion:");
            System.out.println("1- Bañar");
            System.out.println("2- Comer");
            System.out.println("3- Dormir");
            System.out.println("4- Jugar cara o seca");
            System.out.println("5- Comprar comida");
            System.out.println("6- Salir");
            System.out.println("---------------------------------------");
            int opc = Utiles.ingresarEntero(1,6);
            switch (opc) {
                case 1:
                    personaje.getMascota().bañar();
                    break;
                case 2:
                	personaje.comer();
                    break;
                case 3:
                    personaje.getMascota().dormir();
                    break;
                case 4:
                    personaje.caraOSeca();
                    break;
                case 5:
                	personaje.tienda();
                    break;
                case 6:
                    continuar = false;
            }
            continuar = true;
        }while(continuar);
    }

	private static void crearMascota() {
		System.out.println("--------------------- BIENVENIDO ---------------------");
		System.out.println("Elija su mascota");
        System.out.println("1- Nimmo");
        System.out.println("2- Mecca");
        System.out.println("3- Koi");
        System.out.println("------------------------------------------------------");
        int opc = Utiles.ingresarEntero(1,3);
        if(opc == 1) {
            personaje = new Personaje(new Nimmo());
        }
        else if(opc == 2){
            personaje = new Personaje(new Mecca());
        }
        else {
            personaje =  new Personaje(new Koi());
        }
	}


}
