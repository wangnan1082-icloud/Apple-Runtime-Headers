//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSDictionary, SKUIReportAConcernMetadata;

@interface SKUIReportAConcernOperation : ISOperation
{
    NSDictionary *_responseDictionary;
    SKUIReportAConcernMetadata *_metadata;
}

@property(retain, nonatomic) SKUIReportAConcernMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)_httpBody;
- (void)run;
- (id)initWithMetadata:(id)arg1;

@end
