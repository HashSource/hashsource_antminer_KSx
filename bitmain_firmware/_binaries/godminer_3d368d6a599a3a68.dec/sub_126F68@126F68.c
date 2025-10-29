ssize_t sub_126F68()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2E6C8C, &v1, 1u);
  if ( result != 1 )
    return sub_126ED0();
  return result;
}
