bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            if(matrix[i][j]==target)
            return true;
        }
    }
            return false;
}
/*��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������*/

