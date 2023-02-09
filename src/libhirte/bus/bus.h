#pragma once

#include <netinet/in.h>
#include <systemd/sd-bus.h>

char *assemble_tcp_address(const struct sockaddr_in *addr);
sd_bus *peer_bus_open(sd_event *event, const char *dbus_description, const char *dbus_server_addr);
sd_bus *peer_bus_open_server(sd_event *event, const char *dbus_description, const char *sender, int fd);
sd_bus *system_bus_open(sd_event *event);
sd_bus *systemd_bus_open(sd_event *event);
sd_bus *user_bus_open(sd_event *event);