#pragma once

namespace DianaHook
{
    struct IMemoryReaderWriter
    {
        virtual ~IMemoryReaderWriter() = default;
        virtual void read(uint64_t address, void* buffer, size_t bytesToRead, size_t& bytesRead, int flags) = 0;
        virtual void write(uint64_t address, void* buffer, size_t bytesToWrite, size_t& bytesWritten, int flags) = 0;
    };
}
