_DWORD *__fastcall std::thread::Builder::stack_size(_DWORD *result, _DWORD *a2, int a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r12
  int v6; // lr

  a2[1] = a3;
  *a2 = 1;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  *result = *a2;
  result[1] = v3;
  result[2] = v4;
  result[3] = v5;
  result[4] = v6;
  return result;
}
