int checkColumn(int matrix[9][9],int c,int x){
    for (int i = 0; i < 9; i++)
    {
        if (matrix[i][c]==x)
        {
            return 0;
        }
    }
    return 1;
}

int checkColumn(int matrix[9][9],int c,int x){
    for (int i = 0; i < 9; i++)
    {
        if (matrix[c][i]==x)
        {
            return 0;
        }
    }
    return 1;
}

int subMatrix(int matrix[9][9]) {
    return 0;
}