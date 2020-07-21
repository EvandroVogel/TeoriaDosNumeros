
public class Primos3 {
	public static void main(String[] args) {
		int contador = 0;
		int primo = 0;
		while (primo <= (6 * 5 * 7)) {
			++contador;
			primo = 30 * contador + 11;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 13;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 17;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 19;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 23;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 29;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 31;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

			primo = 30 * contador + 37;
			if (primo % 7 != 0) {
				System.out.println(primo);
			}

		}
	}
}
