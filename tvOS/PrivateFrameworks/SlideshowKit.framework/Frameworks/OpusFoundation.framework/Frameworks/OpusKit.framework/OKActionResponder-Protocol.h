//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/JSExport-Protocol.h>
#import <OpusKit/OKActionResponderNoExport-Protocol.h>

@class NSString, OKAction;

@protocol OKActionResponder <OKActionResponderNoExport, JSExport>
- (_Bool)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2;

@optional
- (_Bool)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2 __JS_EXPORT_AS__sendAction:(id)arg3;
@end

