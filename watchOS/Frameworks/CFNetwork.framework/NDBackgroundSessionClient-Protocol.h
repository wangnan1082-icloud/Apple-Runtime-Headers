//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential, NSURLProtectionSpace, NSURLRequest, NSURLResponse, NSURLSessionTaskMetrics, NSValue;

@protocol NDBackgroundSessionClient <NSObject>
- (void)credStorage_setDefaultCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSURLCredential *))arg2;
- (void)credStorage_removeCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_allCredentialsWithReply:(void (^)(NSDictionary *))arg1;
- (void)credStorage_credentialsForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(void (^)(NSDictionary *, NSDictionary *))arg1;
- (void)companionAvailabilityChanged:(_Bool)arg1;
- (void)backgroundSessionDidFinishAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundSessionDidStartAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 willDownloadToURL:(NSURL *)arg2;
- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 didResolveMediaSelectionProperyList:(id)arg2 reply:(void (^)(void))arg3;
- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 didLoadTimeRange:(NSValue *)arg2 totalTimeRangesLoaded:(NSArray *)arg3 timeRangeExpectedToLoad:(NSValue *)arg4;
- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned int)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)openFileAtPath:(NSString *)arg1 mode:(int)arg2 withReply:(void (^)(NSFileHandle *))arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didFinishDownloadingToURL:(NSURL *)arg2 reply:(void (^)(void))arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)willRetryBackgroundDataTask:(unsigned int)arg1 withError:(NSError *)arg2 timingData:(NSDictionary *)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned int)arg1;
- (void)backgroundTask:(unsigned int)arg1 getAuthHeadersForResponse:(NSURLResponse *)arg2 reply:(void (^)(_Bool, NSDictionary *))arg3;
- (void)backgroundDataTask:(unsigned int)arg1 didReceiveData:(NSData *)arg2 withReply:(void (^)(void))arg3;
- (void)backgroundTask:(unsigned int)arg1 didCompleteWithError:(NSError *)arg2 info:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
- (void)backgroundTask:(unsigned int)arg1 didFinishCollectingMetrics:(NSURLSessionTaskMetrics *)arg2 reply:(void (^)(void))arg3;
- (void)backgroundTask:(unsigned int)arg1 needNewBodyStream:(_Bool)arg2 withReply:(void (^)(NSFileHandle *))arg3;
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(NSURLResponse *)arg2 timingData:(NSDictionary *)arg3 reply:(void (^)(int))arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(NSURLResponse *)arg2 timingData:(NSDictionary *)arg3;
- (void)backgroundTask:(unsigned int)arg1 hasConnectionWaitingWithError:(NSError *)arg2;
- (void)backgroundTask:(unsigned int)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTaskHasConnectionWaiting:(unsigned int)arg1;
- (void)backgroundTask:(unsigned int)arg1 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg2 reply:(void (^)(NSURLRequest *, NSFileHandle *))arg3;
- (void)backgroundTask:(unsigned int)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 withNewRequest:(NSURLRequest *)arg3 reply:(void (^)(NSURLRequest *))arg4;
- (void)backgroundTask:(unsigned int)arg1 willBeginDelayedRequest:(NSURLRequest *)arg2 reply:(void (^)(int, NSURLRequest *))arg3;
- (void)backgroundTask:(unsigned int)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 reply:(void (^)(int, NSURLCredential *))arg3;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)backgroundTaskDidResume:(unsigned int)arg1;
@end

