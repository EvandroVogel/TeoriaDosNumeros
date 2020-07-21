
public class Primos {
	public static void main(String[] args) {
		int contador = 0;
		int primo = 0;
		while (primo <= (6 * 5 )) {
			++contador;
			primo = 6 * contador + 5;
			if (primo % 5 != 0) {
				System.out.println(primo);
			}

			primo = 6 * contador + 7;
			if (primo % 5 != 0) {
				System.out.println(primo);
			}
		}
	}
}
