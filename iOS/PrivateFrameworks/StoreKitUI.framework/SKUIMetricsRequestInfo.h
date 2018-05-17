//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface SKUIMetricsRequestInfo : NSObject <NSCopying>
{
    _Bool _responseWasCached;
    _Bool _hasResponseWasCachedValue;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property(nonatomic) _Bool hasResponseWasCachedValue; // @synthesize hasResponseWasCachedValue=_hasResponseWasCachedValue;
@property(nonatomic) _Bool responseWasCached; // @synthesize responseWasCached=_responseWasCached;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportRequestTimesMessagePayload:(id)arg1;

@end
