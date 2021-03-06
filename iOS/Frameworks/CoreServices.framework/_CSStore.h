//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSMutableCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CSStore : NSObject <NSSecureCoding, NSMutableCopying>
{
    struct unique_ptr<CSStore2::Store, std::__1::default_delete<CSStore2::Store>> _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;
- (void)setExpectedAccessQueue:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;
-     // Error parsing type: @24@0:8^{Store=@{array<unsigned int, 64>=[64I]}{atomic<long long>=Aq}{atomic<long long>=Aq}}16, name: initWithStoreNoCopy:
- (id)init;

@end

