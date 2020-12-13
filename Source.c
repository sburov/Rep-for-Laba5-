#include<stdio.h>
#include<math.h>
#define length_of_matrix 5

void main()
{
    int matrix[length_of_matrix][length_of_matrix];
    input_elements(matrix);
    selection_of_elements(matrix);
    sumfields(matrix);
    geometric_meaning(matrix);
}
void input_elements(matrix)
{
    int i, j;
    for (i = 0; i < length_of_matrix ; i++)
    {
        for (j = 0; j < length_of_matrix; j++)
        {
            printf("matrix[%d][%d] =", i + 1, j + 1);
            scanf_s("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < length_of_matrix; i++)
    {
        for (j = 0; j < length_of_matrix; j++)
            printf("   %i\t", matrix[i][j]);
        printf("\n");
    }
}

void selection_of_elements(matrix)
{

    for (int i = 0; i < (5 * 5); ++i) {
        for (int j = 0; j < (5 * 5) - 1; ++j) {
            int cr = j / 5; // current row
            int cc = j % 5; // current column
            int nr = (j + 1) / 5; // next item row
            int nc = (j + 1) % 5; // next item column

            if (matrix[cr][cc] > matrix[nr][nc]) {
                int temp = matrix[cr][cc];
                matrix[cr][cc] = matrix[nr][nc];
                matrix[nr][nc] = temp;
            }

        }
    }
    for (int j = 0; j < length_of_matrix; j++)
        for (int i = 0; i < length_of_matrix - 1; i++)
        {
            variable i;
            for (p = i + 1; p < length_of_matrix - 1; p++)
                if (matrix[i][j] > matrix[p][j])
                {

                    i = p;
                    f = matrix[i][j];
                    matrix[i][j] = matrix[i][j];
                    matrix[i][j] = f;
                }
        }
    for (int i = 0; i < length_of_matrix; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%i\t", matrix[i][j]);
        printf("\n");
    }

}
void sumfields(matrix)
{
    int i, j;
    double sum_elements;
    sum_elements = 0;
    for (i = 0; i < length_of_matrix; i++)
    {
        {
            for (j = 0; j < length_of_matrix; j++)
                sum_elements = sum_elements + matrix[i][j];
        }
        printf("   suma elemetiv = %lf", sum_elements);
        printf("\n");
        sum_elements = 0;
    }

}

void geometric_meaning(matrix)
{
    int i = 1, j;
    double product, geometriñ_mean;
    product = i;
    for (i = 0; i < length_of_matrix; i++);
    {
        {
            for (j = 0; j < length_of_matrix; j++)
                product = product * matrix[i][j];
            geometriñ_mean = pow(product, (double)i / length_of_matrix);
        }
        printf(" seredne heometrichne znachennya = %lf", geometriñ_mean);
        printf("\n");
        product = i;
    }
}


