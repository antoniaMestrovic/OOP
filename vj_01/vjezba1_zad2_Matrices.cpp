#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

typedef struct
{
    int row;
    int col;
    float** mat;
}Matrix;

Matrix input(int row, int col)
{
    Matrix matrix;
    matrix.row = row;
    matrix.col = col;
    matrix.mat = new float* [row];
    for (int i = 0; i < row; i++)
        matrix.mat[i] = new float[col];

    cout << "Enter the elements of matrix 'A'" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix.mat[i][j];
        }
    }
    cout << endl;
    return matrix;
}

void print(Matrix m, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << fixed << setprecision(4) << right << m.mat[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix generate(int row, int col)
{
    srand(time(NULL));
    int a = 1, b = 15;
    Matrix matrix;
    matrix.row = row;
    matrix.col = col;
    matrix.mat = new float* [row];
    for (int i = 0; i < row; i++)
        matrix.mat[i] = new float[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix.mat[i][j] = a + (rand() % (b - a + 1));
        }
    }
    return matrix;
}

Matrix add(Matrix mat1, Matrix mat2, int row, int col)
{
    Matrix matrix;
    matrix.row = row;
    matrix.col = col;
    matrix.mat = new float* [row];
    for (int i = 0; i < row; i++)
        matrix.mat[i] = new float[col];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matrix.mat[i][j] = (mat1.mat[i][j] + mat2.mat[i][j]);
        }
    }
    return matrix;
}

Matrix subtract(Matrix mat1, Matrix mat2, int row, int col)
{
    Matrix matrix;
    matrix.row = row;
    matrix.col = col;
    matrix.mat = new float* [row];
    for (int i = 0; i < row; i++)
        matrix.mat[i] = new float[col];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matrix.mat[i][j] = (mat1.mat[i][j] - mat2.mat[i][j]);
        }
    }
    return matrix;
}

Matrix multiply(Matrix mat1, Matrix mat2, int row, int col)
{
    Matrix matrix;
    matrix.row = row;
    matrix.col = col;
    matrix.mat = new float* [row];
    for (int i = 0; i < row; i++)
        matrix.mat[i] = new float[col];

    if (mat1.col != mat2.row)
    {
        cout << "You can't multiply these matrices!! " << endl;
    }

    else
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                matrix.mat[i][j] = 0;

                for (int k = 0; k < col; ++k)
                {
                    matrix.mat[i][j] += mat1.mat[i][k] * mat2.mat[k][j];
                }
            }
        }
    }
    return matrix;
}

Matrix transpose(Matrix m, int row, int col)
{
    Matrix matrix;
    matrix.row = col;
    matrix.col = row;
    matrix.mat = new float* [col];
    for (int i = 0; i < col; i++)
        matrix.mat[i] = new float[row];

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matrix.mat[j][i] = m.mat[i][j];
        }
    }
    return matrix;
}

int main()
{
    int m, n;
    cout << "Enter m dimension of matrix: " << endl;
    cin >> m;
    cout << "Enter n dimension of matrix: " << endl;
    cin >> n;
    Matrix A = input(m, n);
    cout << "Matrix that you entered: " << endl;
    print(A, m, n);
    cout << endl;
    cout << "Generated matrix B: " << endl;
    Matrix B = generate(m, n);
    print(B, m, n);
    cout << endl;
    cout << "Addition of matrices: " << endl;
    Matrix C = add(A, B, m, n);
    print(C, m, n);
    cout << endl;
    cout << "Subraction of matrices: " << endl;
    Matrix D = subtract(C, B, m, n);
    print(D, m, n);
    cout << endl;
    cout << "Multiplication of matrices: " << endl;
    Matrix E = multiply(A, B, m, n);
    print(E, m, n);
    cout << endl;
    cout << " Find transpose matrix: " << endl;
    Matrix F = transpose(A, m, n);
    print(F, n, m);
}