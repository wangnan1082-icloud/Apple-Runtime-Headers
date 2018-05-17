//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RPDProgramBinary;

@interface RPDShaderProgram : NSObject
{
    _Bool _linkSucceeded;
    unsigned int _program;
    NSString *_logMessage;
}

@property(copy, nonatomic) NSString *logMessage; // @synthesize logMessage=_logMessage;
@property(nonatomic) _Bool linkSucceeded; // @synthesize linkSucceeded=_linkSucceeded;
@property(nonatomic) unsigned int program; // @synthesize program=_program;
- (void).cxx_destruct;
@property(readonly, nonatomic) RPDProgramBinary *programBinary;
- (void)dealloc;
- (id)initWithProgramBinary:(id)arg1;
- (id)initWithVertexSource:(id)arg1 fragmentSource:(id)arg2 feedbackVaryings:(const char **)arg3 feedbackVaryingsCount:(int)arg4;
- (id)initWithTransformFeedbackVertexSource:(id)arg1 fragmentSource:(id)arg2 feedbackVaryings:(const char **)arg3 feedbackVaryingsCount:(int)arg4;
- (id)initWithVertexSource:(id)arg1 fragmentSource:(id)arg2;

@end
