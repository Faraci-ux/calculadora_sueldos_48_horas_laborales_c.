#include<stdio.h>

int main()
{
	
	float pago_hora, sueldo, horas_extra, horas;
	
	
	printf("Ingresa las horas trabajadas del empleado:\n");
	scanf("%f", &horas);
	if (horas<=0)
	{
		printf("\nIngresa horas mayores a cero");
		return 1;
	}
	
	printf("\nIngresa el pago por hora del empleado:\n");
	scanf("%f", &pago_hora);
	if (pago_hora<=0)
	{
		printf("\nIngresa pagos mayores a cero");
		return 1;
	}
	
	if(horas>48)
	{
		horas_extra=(horas-48)*(pago_hora*1.20);
		sueldo=(48*pago_hora)+horas_extra;
	}
	
	else if(horas<=48)
	{
		sueldo=horas*pago_hora;
	}
	printf("el sueldo del empleado es: %.2f", sueldo);
	return 0;
}
	
	printf("el sueldo del empleado es: %.2f", sueldo);
	
	return 0;
}
