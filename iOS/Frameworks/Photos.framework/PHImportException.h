//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSString;

@interface PHImportException : NSObject
{
    NSString *_message;
    unsigned long long _importance;
    NSString *_path;
    NSString *_sourceCodeFile;
    unsigned long long _lineNumber;
    NSError *_nsError;
    NSDate *_createDate;
}

+ (id)logForAllExceptions:(id)arg1;
+ (id)logForTerminalExceptionsForRecorder:(id)arg1;
+ (id)logForMostImportantException:(id)arg1;
+ (id)mostImportantException:(id)arg1;
+ (id)exceptionWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;
@property(readonly, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(readonly, nonatomic) NSError *nsError; // @synthesize nsError=_nsError;
@property(readonly, nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSString *sourceCodeFile; // @synthesize sourceCodeFile=_sourceCodeFile;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long importance; // @synthesize importance=_importance;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)logWithPrefix:(id)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isTerminal;
- (_Bool)isCritical;
- (id)initWithMessage:(id)arg1 path:(id)arg2 importance:(unsigned long long)arg3 nsError:(id)arg4 file:(char *)arg5 line:(unsigned long long)arg6;

@end
