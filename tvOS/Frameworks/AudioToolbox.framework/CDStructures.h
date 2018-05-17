//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AUAudioUnit, NSObject<OS_xpc_object>;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APComponent;

struct AUAudioUnitV2Bridge_Renderer;

struct AUEventSchedule {
    struct AURenderEventAllocator *mAllocator;
    struct TAtomicStack<AURenderEventStruct> mAddedEventStack;
    union AURenderEvent *mScheduleHead;
    AUAudioUnit *mOwningAU;
};

struct AUInputElement;

struct AULocalParameterObserver;

struct AUObserverController {
    id _field1;
    id _field2;
    id _field3;
    _Bool _field4;
    struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> _field5;
    struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent>> _field6;
};

struct AUObserverList {
    struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *>> _field1;
};

struct AUPBMethods {
    unsigned int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct AUParameterObserverExtendedToken {
    unsigned long long _field1;
};

struct AUProcessingBlock {
    struct AUPBMethods _field1;
    void *_field2;
};

struct AURenderEventAllocator;

struct AURenderEventStruct;

struct AUv3InstanceBase {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    void *_field5;
    struct OpaqueAudioComponentInstance *_field6;
    struct AudioComponentDescription _field7;
    id _field8;
    id _field9;
    struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> _field10;
    struct unique_ptr<AUv3InstanceBase::AllParameterListener, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> _field11;
    struct AUv3RenderAdapter _field12;
    CDUnknownBlockType _field13;
    CDUnknownBlockType _field14;
    struct ParameterMap _field15;
    struct HostCallbackInfo _field16;
};

struct AUv3RenderAdapter {
    struct CAMutex _field1;
    struct vector<AUv3RenderAdapter::AUInputElement, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> _field2;
    CDUnknownBlockType _field3;
};

struct AVHapticPlayerFixedParameter {
    unsigned long long type;
    float value;
};

struct AddressToParameter;

struct AllParameterListener;

struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
};

struct AudioComponentVector {
    shared_ptr_a99cf2ba *__begin_;
    shared_ptr_a99cf2ba *__end_;
    struct __compressed_pair<std::__1::shared_ptr<APComponent>*, std::__1::allocator<std::__1::shared_ptr<APComponent>>> {
        shared_ptr_a99cf2ba *__value_;
    } __end_cap_;
    _Bool mSorted;
};

struct BusPropertyObserver;

struct CADeserializer {
    struct __CFData *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
};

struct CAMutex {
    CDUnknownFunctionPointerType *_vptr$CAMutex;
    char *mName;
    struct _opaque_pthread_t *mOwner;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } mMutex;
};

struct CASerializer {
    struct __CFData *_field1;
};

struct ClientSyncCaller;

struct HapticSharedMemory {
    CDUnknownFunctionPointerType *_vptr$SharableMemoryBase;
    _Bool mIsOwner;
    _Bool mWasMapped;
    unsigned long long mSize;
    void *mBuffer;
    unsigned int mPort;
    int mFileDesc;
    int mSerial;
    NSObject<OS_xpc_object> *mXPCObject;
};

struct HostCallbackInfo {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct InterAppAudioAppInfo {
    _Bool _field1;
    int _field2;
    struct ObjCImage *_field3;
    struct __CFString *_field4;
    struct __CFString *_field5;
    struct __CFURL *_field6;
};

struct NewServerListener;

struct Node;

struct NodeStack {
    struct Node *mHead;
};

struct ObjCImage;

struct OpaqueAudioComponentInstance;

struct ParameterAutomationEvent;

struct ParameterMap {
    id _field1;
    _Bool _field2;
    struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> _field3;
    struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> _field4;
    id _field5;
};

struct PropertyListener;

struct RealtimeState {
    struct CAMutex mMutex;
    struct RenderObserverList renderObserverList;
    struct AUEventSchedule eventSchedule;
};

struct RenderObserverList {
    struct TThreadSafeList<RenderObserver> mObservers;
    _Bool mTouched;
};

struct ScopeElementIDObj;

struct TAtomicStack<AURenderEventStruct> {
    struct AURenderEventStruct *mHead;
};

struct TThreadSafeList<RenderObserver> {
    struct NodeStack mActiveList;
    struct NodeStack mPendingList;
    struct NodeStack mFreeList;
};

struct TestAUProcessingBlock;

struct __CFData;

struct __CFString;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock>>> {
    struct __tree<std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, AUProcessingBlock>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, AUProcessingBlock>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, AUProcessingBlock>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo>>> {
    struct __tree<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, RemoteAUHandleInfo>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> {
    struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<APComponent> {
    struct APComponent *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
    struct __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> {
        struct AUAudioUnitV2Bridge_Renderer *__value_;
    } __ptr_;
};

struct unique_ptr<AUv3InstanceBase::AllParameterListener, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> {
    struct __compressed_pair<AUv3InstanceBase::AllParameterListener *, std::__1::default_delete<AUv3InstanceBase::AllParameterListener>> {
        struct AllParameterListener *_field1;
    } _field1;
};

struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>;

struct unique_ptr<CAMutex, std::__1::default_delete<CAMutex>> {
    struct __compressed_pair<CAMutex *, std::__1::default_delete<CAMutex>> {
        struct CAMutex *__value_;
    } __ptr_;
};

struct unique_ptr<ClientSyncCaller, std::__1::default_delete<ClientSyncCaller>> {
    struct __compressed_pair<ClientSyncCaller *, std::__1::default_delete<ClientSyncCaller>> {
        struct ClientSyncCaller *__value_;
    } __ptr_;
};

struct unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock>> {
    struct __compressed_pair<TestAUProcessingBlock *, std::__1::default_delete<TestAUProcessingBlock>> {
        struct TestAUProcessingBlock *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
    struct __hash_table<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<AULocalParameterObserver *, std::__1::allocator<AULocalParameterObserver *>> {
    struct AULocalParameterObserver **_field1;
    struct AULocalParameterObserver **_field2;
    struct __compressed_pair<AULocalParameterObserver **, std::__1::allocator<AULocalParameterObserver *>> {
        struct AULocalParameterObserver **_field1;
    } _field3;
};

struct vector<AUv3InstanceBase::ScopeElementIDObj, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> {
    struct ScopeElementIDObj *_field1;
    struct ScopeElementIDObj *_field2;
    struct __compressed_pair<AUv3InstanceBase::ScopeElementIDObj *, std::__1::allocator<AUv3InstanceBase::ScopeElementIDObj>> {
        struct ScopeElementIDObj *_field1;
    } _field3;
};

struct vector<AUv3RenderAdapter::AUInputElement, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> {
    struct AUInputElement *_field1;
    struct AUInputElement *_field2;
    struct __compressed_pair<AUv3RenderAdapter::AUInputElement *, std::__1::allocator<AUv3RenderAdapter::AUInputElement>> {
        struct AUInputElement *_field1;
    } _field3;
};

struct vector<AddressToParameter, std::__1::allocator<AddressToParameter>> {
    struct AddressToParameter *__begin_;
    struct AddressToParameter *__end_;
    struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> {
        struct AddressToParameter *__value_;
    } __end_cap_;
};

struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>> {
    struct BusPropertyObserver *__begin_;
    struct BusPropertyObserver *__end_;
    struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> {
        struct BusPropertyObserver *__value_;
    } __end_cap_;
};

struct vector<NSObject<OS_dispatch_semaphore>*, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSObject<OS_dispatch_semaphore>**, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> {
        id *__value_;
    } __end_cap_;
};

struct vector<NewServerListener, std::__1::allocator<NewServerListener>> {
    struct NewServerListener *__begin_;
    struct NewServerListener *__end_;
    struct __compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener>> {
        struct NewServerListener *__value_;
    } __end_cap_;
};

struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent>> {
    struct ParameterAutomationEvent *_field1;
    struct ParameterAutomationEvent *_field2;
    struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent>> {
        struct ParameterAutomationEvent *_field1;
    } _field3;
};

struct vector<PropertyListener, std::__1::allocator<PropertyListener>> {
    struct PropertyListener *__begin_;
    struct PropertyListener *__end_;
    struct __compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener>> {
        struct PropertyListener *__value_;
    } __end_cap_;
};

struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> {
    struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field1;
    struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>*, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>>>> {
        struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct shared_ptr<APComponent> {
    struct APComponent *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_a99cf2ba;

typedef struct vector<AddressToParameter, std::__1::allocator<AddressToParameter>> {
    struct AddressToParameter *__begin_;
    struct AddressToParameter *__end_;
    struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter>> {
        struct AddressToParameter *__value_;
    } __end_cap_;
} vector_66b3461a;

typedef struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver>> {
    struct BusPropertyObserver *__begin_;
    struct BusPropertyObserver *__end_;
    struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver>> {
        struct BusPropertyObserver *__value_;
    } __end_cap_;
} vector_e102d759;

#pragma mark Named Unions

union AURenderEvent;
