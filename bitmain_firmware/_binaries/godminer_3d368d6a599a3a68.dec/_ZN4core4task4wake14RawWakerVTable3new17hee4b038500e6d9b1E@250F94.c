_DWORD *__fastcall core::task::wake::RawWakerVTable::new(_DWORD *result, int a2, int a3, int a4, int a5)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}
