ssize_t sub_115EEC()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2D10A8, &v1, 1u);
  if ( result != 1 )
    return sub_115E54();
  return result;
}
