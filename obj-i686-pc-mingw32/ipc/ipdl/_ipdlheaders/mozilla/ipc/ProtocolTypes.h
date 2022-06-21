//
// Automatically generated by ipdlc.
// Edit at your own risk
//

#ifndef ProtocolTypes_h
#define ProtocolTypes_h

#include "mozilla/Attributes.h"
#include "IPCMessageStart.h"
#include "ipc/IPCMessageUtils.h"
#include "mozilla/RefPtr.h"
#include "nsStringGlue.h"
#include "nsTArray.h"
#include "mozilla/ipc/ProtocolUtils.h"
#include "nsTHashtable.h"
#include "mozilla/OperatorNewExtensions.h"


//-----------------------------------------------------------------------------
// Declaration of the IPDL type |struct ProtocolFdMapping|
//
namespace mozilla {
namespace ipc {
class ProtocolFdMapping final
{
private:
    typedef mozilla::ipc::FileDescriptor FileDescriptor;

public:
    MOZ_IMPLICIT ProtocolFdMapping();

    MOZ_IMPLICIT ProtocolFdMapping(
            const uint32_t& _protocolId,
            const FileDescriptor& _fd)
    {
        Init();
        Assign(_protocolId, _fd);
    }

    MOZ_IMPLICIT ProtocolFdMapping(const ProtocolFdMapping& _o)
    {
        Init();
        Assign((_o).protocolId(), (_o).fd());
    }

    ~ProtocolFdMapping();

    void
    operator=(const ProtocolFdMapping& _o)
    {
        Assign((_o).protocolId(), (_o).fd());
    }

    bool
    operator==(const ProtocolFdMapping& _o) const;

    uint32_t&
    protocolId()
    {
        return protocolId_;
    }
    const uint32_t&
    protocolId() const
    {
        return protocolId_;
    }

    FileDescriptor&
    fd()
    {
        return fd_;
    }
    const FileDescriptor&
    fd() const
    {
        return const_cast<FileDescriptor&>(fd_);
    }

private:
    void
    Init();

    void
    Assign(
            const uint32_t& _protocolId,
            const FileDescriptor& _fd);

    uint32_t protocolId_;
    FileDescriptor fd_;
};
} // namespace ipc
} // namespace mozilla

#endif // ifndef ProtocolTypes_h
