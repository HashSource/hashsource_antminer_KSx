float *__fastcall platform_get_fan_control_info(float *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r1
  float v8; // r2
  float v9; // r3
  float v10; // lr

  v1 = dword_312D58;
  v2 = dword_312D5C;
  v3 = dword_312D60;
  *(_DWORD *)result = dword_312D54;
  *((_DWORD *)result + 1) = v1;
  *((_DWORD *)result + 2) = v2;
  *((_DWORD *)result + 3) = v3;
  v4 = dword_312D68;
  v5 = dword_312D6C;
  v6 = dword_312D70;
  *((_DWORD *)result + 4) = dword_312D64;
  *((_DWORD *)result + 5) = v4;
  *((_DWORD *)result + 6) = v5;
  *((_DWORD *)result + 7) = v6;
  v7 = flt_312D78;
  v8 = flt_312D7C;
  v9 = flt_312D80;
  v10 = flt_312D84;
  *((_DWORD *)result + 8) = dword_312D74;
  result[9] = v7;
  result[10] = v8;
  result[11] = v9;
  result[12] = v10;
  return result;
}
