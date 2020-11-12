/*
* Program to oporation on CRUD.
* This code is reseased under Stack Learner Public License.
* (c) 2020, The Encrypted Coders Team.
*/
#include <stdio.h>
#include <stdlib.h>

int main()

{

    int id, num, array_size, arr_index, update_value;
    int i, values, delete, arr_select, fixd_index, arr_position, del_ind, del_value;

    printf("\t\t\t\t* Program to oporation in CRUD.\n");
    printf("\t\t\t\t* Athor  : Imran Hasan\n");
    printf("\t\t\t\t* Address: Sherpur, Bogra\n");
    printf("\t\t\t\t* Email  : imranhasan871@gmail.com\n");
    printf("\t\t\t\t* Contact: +8801966644457\n");
    printf("\t\t\t\t* Version: 0.1\n");
    printf("***********************************************************************************************\n");

    printf("Enter array size:");
    scanf("%d", &array_size);
    int arr[array_size];

    printf("/1/ Create Array\n");

    while (1)
    {
        printf("/2/ Read Array\n");
        printf("/3/ Array Update\n");
        printf("/4/ Delete Array\n");
        printf("/5/ Exit\n");
        printf("\n");

        printf("Enter you choise: ");
        scanf("%d", &id);

        switch (id)
        {
        case 1:

            printf("Wow![%d] is your array size.\n", array_size);
            printf("Enter Values: ");

            for (i = 0; i < array_size; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            printf("/1/ Show full array.\n");
            printf("/2/ Show fixed value.\n");
            printf("/3/ Show fixed position.\n");
            scanf("%d", &arr_select);
            if (arr_select == 1)
            {
                for (i = 0; i < array_size; i++)
                {
                    printf("[%d]index = %d\n", i, arr[i]);
                }
                printf("\n");
                break;
            }
            else if (arr_select == 2)
            {
                printf("Enter fixed index:");
                scanf("%d", &fixd_index);
                if (fixd_index > array_size)
                {
                    printf("Enter fixed position:");
                    printf("\n");

                    break;
                }
                else
                {
                    printf("[%d]index = %d\n", fixd_index, arr[fixd_index]);
                    printf("\n");
                    break;
                }
            }
            else if (arr_select == 3)
            {
                printf("Enter value for show it's postion:");
                scanf("%d", &arr_position);

                for (i = 0; i < array_size; i++)
                {
                    if (arr_position == arr[i])
                    {
                        printf("%d index is = [%d]\n", arr_position, i);
                        printf("\n");
                    }
                }

                break;
            }

            break;

        case 3:
            printf("Enter Position:");
            scanf("%d", &arr_index);
            printf("Enter value:");
            scanf("%d", &update_value);

            for (i = 0; i < array_size; i++)
            {
                if (arr_index == i)
                {
                    arr[i] = update_value;
                }
            }

            break;

        case 4:

            printf("/1/ Enter Position:\n");
            printf("/2/ Enter Value:\n");
            printf("Enter your Choise:");
            scanf("%d", &delete);

            if (delete == 1)
            {
                printf("Enter index:");
                scanf("%d", &del_ind);
                for (i = del_ind; i < array_size; i += 1)
                {
                    arr[i] = arr[i + 1];
                }
                array_size -= 1;
            }
            else if (delete == 2)
            {
                printf("Enter Value:");
                scanf("%d", &del_value);
                for (int i = 0; i < array_size; i++)
                {
                    if (del_value == arr[i])
                    {
                        for (i = i; i < array_size; i += 1)
                        {
                            arr[i] = arr[i + 1];
                        }
                    }

                }
                array_size -= 1;
            }
            break;

        case 5:
            exit(0);

            default:

            printf("Please Enter again\n");
            break;
        }
    }

    return 0;
}