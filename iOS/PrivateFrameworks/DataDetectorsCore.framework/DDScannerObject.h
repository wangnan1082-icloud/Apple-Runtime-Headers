//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject
{
    struct __DDScanner *_scanner;
    int _type;
}

- (int)type;
- (id)resultsWithOptions:(long long)arg1;
- (id)ddResultsWithOptions:(long long)arg1;
- (long long)scanString:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end
