int __fastcall <std::sys::unix::process::process_inner::<impl std::sys::unix::process::process_common::Command>::posix_spawn::PosixSpawnattr as core::ops::drop::Drop>::drop(
        posix_spawnattr_t **a1)
{
  return posix_spawnattr_destroy(*a1);
}
