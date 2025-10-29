unsigned int *std::thread::current()
{
  unsigned int *result; // r0

  result = sub_1D3D70();
  if ( !result )
    core::option::expect_failed((int)aUseOfStdThread, 94, (int)&off_2C9788);
  return result;
}
