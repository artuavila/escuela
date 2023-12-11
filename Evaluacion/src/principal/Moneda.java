package principal;

import java.util.Random;

public enum Moneda {
    CARA,
    SECA;

    public static Moneda lanzarMoneda() {
        Random random = new Random();
        int aleatorio = random.nextInt(2);
        return values()[aleatorio];
    }
}
