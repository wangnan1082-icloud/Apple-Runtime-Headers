//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject
{
    long long _statusCode;
    NSError *_error;
    NSString *_responseBody;
}

@property(readonly) NSString *responseBody; // @synthesize responseBody=_responseBody;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
