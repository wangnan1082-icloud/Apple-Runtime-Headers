//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@interface AVB17221AEMControlDescriptorSamplingRateValue : AVB17221AEMControlDescriptorValue
{
    unsigned int _samplingRate;
}

+ (id)keyPathsForValuesAffectingBaseFrequency;
+ (id)keyPathsForValuesAffectingPull;
@property unsigned int samplingRate; // @synthesize samplingRate=_samplingRate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)validControlValueType:(unsigned short)arg1;
- (id)objectsForSetCommandValuesData:(id)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property unsigned int baseFrequency; // @dynamic baseFrequency;
@property unsigned char pull; // @dynamic pull;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (id)initWithValuePointer:(char **)arg1 valueType:(unsigned short)arg2;

@end
