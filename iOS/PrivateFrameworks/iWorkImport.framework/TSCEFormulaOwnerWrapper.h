//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying>
{
    UUIDData_5fbc143e _ownerUID;
}

- (id).cxx_construct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTSCEFormulaOwnerWrapper:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UUIDData_5fbc143e ownerUID;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;

@end

