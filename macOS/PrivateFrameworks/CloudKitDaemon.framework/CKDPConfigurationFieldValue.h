//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPConfigurationFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _longValue;
    NSData *_bytesValue;
    NSMutableArray *_fieldValues;
    NSMutableArray *_listValues;
    NSString *_stringValue;
    int _type;
    BOOL _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int longValue:1;
        unsigned int type:1;
        unsigned int boolValue:1;
    } _has;
}

+ (Class)listValuesType;
+ (Class)fieldValuesType;
@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) NSMutableArray *fieldValues; // @synthesize fieldValues=_fieldValues;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long longValue; // @synthesize longValue=_longValue;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)listValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)addListValues:(id)arg1;
- (void)clearListValues;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldValuesCount;
- (void)addFieldValues:(id)arg1;
- (void)clearFieldValues;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasLongValue;
@property(nonatomic) BOOL hasBoolValue;
@property(readonly, nonatomic) BOOL hasBytesValue;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

