/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSString, VIBFormattedMessageElementAttributes;

@interface PLTFormattedMessageAttachment : NSObject
{
    unsigned short _downloadType;
    VIBFormattedMessageElementAttributes *_elementAttributes;
    NSString *_attachmentName;
    NSString *_downloadID;
    NSString *_bucketName;
    NSString *_url;
    NSString *_thumbnailDownloadID;
    NSString *_thumbnailBucketName;
    NSString *_thumbnailUrl;
    NSString *_mediaType;
}

@property(nonatomic) unsigned short downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *thumbnailBucketName; // @synthesize thumbnailBucketName=_thumbnailBucketName;
@property(retain, nonatomic) NSString *thumbnailDownloadID; // @synthesize thumbnailDownloadID=_thumbnailDownloadID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(retain, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(retain, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(retain, nonatomic) VIBFormattedMessageElementAttributes *elementAttributes; // @synthesize elementAttributes=_elementAttributes;
//- (void).cxx_destruct;

@end
