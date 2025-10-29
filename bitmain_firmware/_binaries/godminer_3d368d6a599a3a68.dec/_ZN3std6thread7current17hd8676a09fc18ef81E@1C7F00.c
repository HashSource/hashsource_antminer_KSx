int std::thread::current()
{
  int result; // r0

  result = sub_1E68E4();
  if ( !result )
    core::option::expect_failed();
  return result;
}
