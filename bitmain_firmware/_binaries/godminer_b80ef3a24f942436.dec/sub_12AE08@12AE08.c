ssize_t sub_12AE08()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 48;
  result = write(dword_2F187C, &v1, 1u);
  if ( result != 1 )
    return sub_12AD70();
  return result;
}
