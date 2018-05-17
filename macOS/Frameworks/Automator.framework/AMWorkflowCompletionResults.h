//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError;

@interface AMWorkflowCompletionResults : NSObject <NSSecureCoding>
{
    id _output;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutput:(id)arg1 error:(id)arg2;

@end
