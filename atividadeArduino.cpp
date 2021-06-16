public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView resultA = findViewById(R.id.r1);
        TextView resultB = findViewById(R.id.r2);
        TextView resultC = findViewById(R.id.r3);
        Button show = findViewById(R.id.mostrar);

        String vetorA[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
        int vectorB[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int vectorC[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int vectorAux[] = {0};
        int result[] = {1};
        int media[] = new int[0];

        show.setOnClickListener(new view.OnClickListener() {

            @Override
            public void onClick(View v) {

                for (int i = 0; i < 10; i++) { // A

                    resultA.setText(String.valueOf(vectorA[i]));
                }
                for (int i = 0; i < 10; i++) { // B

                    vetorAux[i] = vetorAux[i] + vectorB[i];


                }
                for (int i = 0; i < 1; i++) {

                     media[i] = vetorAux[i] / 10;
                    resultB.setText(String.valueOf(media));

                }

                for (int i = 0; i < 10; i++) {   //C

                    resultado[i] = resultado[i] * vectorC[i];

                }
                resultC.setText(String.valueOf(result[0]));
            }

    });
    }
}