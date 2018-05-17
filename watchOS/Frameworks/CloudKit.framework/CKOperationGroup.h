//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CKOperationConfiguration, CKOperationGroupSystemImposedInfo, NSNumber, NSString;

@interface CKOperationGroup : NSObject <NSSecureCoding>
{
    int _expectedSendSize;
    int _expectedReceiveSize;
    CKOperationConfiguration *_defaultConfiguration;
    NSString *_operationGroupID;
    NSString *_name;
    CKOperationGroupSystemImposedInfo *_systemImposedInfo;
    NSNumber *_quantityNumber;
    NSString *_authPromptReason;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(copy, nonatomic) NSNumber *quantityNumber; // @synthesize quantityNumber=_quantityNumber;
@property(retain, nonatomic) CKOperationGroupSystemImposedInfo *systemImposedInfo; // @synthesize systemImposedInfo=_systemImposedInfo;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *operationGroupID; // @synthesize operationGroupID=_operationGroupID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (unsigned int)resolvedNetworkServiceTypeForConfig:(id)arg1;
@property(readonly, nonatomic) long long approximateReceiveBytes;
@property(readonly, nonatomic) long long approximateSendBytes;
- (long long)_approximateBytesForTransferSize:(int)arg1;
@property(copy) CKOperationConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property int expectedReceiveSize; // @synthesize expectedReceiveSize=_expectedReceiveSize;
@property int expectedSendSize; // @synthesize expectedSendSize=_expectedSendSize;
@property unsigned int quantity;
- (id)init;

@end
