//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICPushNotificationsResponse, ICStoreRequestContext, NSString;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSString *_notificationType;
    ICPushNotificationsResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 notificationType:(id)arg2;

@end
